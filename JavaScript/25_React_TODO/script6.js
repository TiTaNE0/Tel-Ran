class Task extends React.Component {
    constructor(props) {
        super(props);
        this.remove = this.remove.bind(this);
    }

    edit = () => {
        alert(`Pressed edit button of ${this.props.children}`);
    }

    remove = function () {
        alert(`Pressed remove button ${this.props.children}`);
    }

    render() {
        return (
            <div className='box'>
                <div>{this.props.children}</div>
                <button onClick={this.edit} className='btn light'>Edit</button>
                <button onClick={this.remove} className='btn red'>Remove</button>
            </div>
        );
    }
}

ReactDOM.render(
    <div className='field'>
        <Task>Task1</Task>
        <Task>Task2</Task>
        <Task>Task3</Task>
    </div>, document.getElementById('root')
);