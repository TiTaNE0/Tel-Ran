class Block extends React.Component {
    render() {
        const subTitle = 'progam Tel Ran';
        return (
        <div>
            <h1>Java 38</h1>
            <h4>{subTitle}</h4>
        </div>
        );
    }
}

ReactDOM.render(<div>
    <Block/>
    <Block/>
    <Block/>
</div>, document.getElementById('root'));
